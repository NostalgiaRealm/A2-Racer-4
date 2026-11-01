
/* ==== FUN_00406eb0 @ 00406eb0 ==== 
 * signature: undefined FUN_00406eb0(void)
 * body: 00406eb0-00406f36
 */

int FUN_00406eb0(void)

{
  void *pvVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056956d;
  local_c = ExceptionList;
  if (DAT_005caf74 == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xf0);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_005caf74 = 0;
    }
    else {
      DAT_005caf74 = FUN_00406cd0(pvVar1);
    }
    local_4 = 0xffffffff;
    FUN_004a6980((uint)(DAT_005caf74 != 0),(byte *)s___s___d_Not_enough_memory_to_cre_005903a0);
  }
  ExceptionList = local_c;
  return DAT_005caf74;
}


