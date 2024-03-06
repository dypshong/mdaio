#ifndef __RT_SOFT_RAID0_H__
#define __RT_SOFT_RAID0_H__

#include <vector>
#include <string>
#include <mutex>

namespace snuqs {
namespace rt {

struct soft_raid0_t {
  static constexpr uint64_t MAX_IO = 0x7ffff000;
  static constexpr uint64_t BLOCK_SIZE = (1ul << 21);
  void* base = reinterpret_cast<void*>(0xdead000000000000ul);

  soft_raid0_t(std::vector<std::string> _paths);
  ~soft_raid0_t();

  std::mutex mutex;
  std::vector<std::string> paths;
  std::vector<int> fds;
  int alloc(void **addr_p, uint64_t size);
  int free(void* addr);
  int write(void* dst, void* src, uint64_t size);
  int read(void* dst, void* src, uint64_t size);
};

} // namespace rt
} // namespace snuqs

#endif //__RT_SOFT_RAID0_H__
