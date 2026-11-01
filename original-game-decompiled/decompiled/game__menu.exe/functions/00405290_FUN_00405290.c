
/* ==== FUN_00405290 @ 00405290 ==== 
 * signature: PVOID __register FUN_00405290(LPCVOID param_1)
 * body: 00405290-004052b5
 */

PVOID FUN_00405290(LPCVOID param_1)

{
  _MEMORY_BASIC_INFORMATION local_1c;
  
  VirtualQuery(param_1,&local_1c,0x1c);
  if (local_1c.State != 0x1000) {
    local_1c.AllocationBase = (PVOID)0x0;
  }
  return local_1c.AllocationBase;
}


