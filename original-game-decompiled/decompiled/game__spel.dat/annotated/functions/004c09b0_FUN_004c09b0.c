
/* ==== FUN_004c09b0 @ 004c09b0 ==== 
 * signature: undefined __cdecl FUN_004c09b0(uint param_1)
 * body: 004c09b0-004c0a81;004c0a85-004c0afa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0a82-004c0a84
 */

void __cdecl FUN_004c09b0(uint param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f77b;
  local_c = ExceptionList;
  if (DAT_0073b788 == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x46);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[3] = 0;
      _strncpy((char *)(puVar1 + 5),s__d3d_viewport_ptr_005b2b74,0x19);
      _strncpy((char *)((int)puVar1 + 0x2d),s_viewport_t_005b2b68,0x19);
      if (puVar1[3] != 0) {
        if (puVar1[3] == 1) {
          FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
          FUN_0054b339((LPVOID)*puVar1);
        }
        if (puVar1[3] != 0) {
          FUN_0054b339((LPVOID)puVar1[4]);
          puVar1[3] = 0;
        }
        FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
      }
      if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
      }
      pvVar2 = operator_new(param_1 * 4);
      *puVar1 = pvVar2;
      puVar1[1] = param_1;
      puVar1[2] = 0;
      pvVar2 = operator_new(param_1);
      puVar1[4] = pvVar2;
      FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
      iVar3 = 0;
      puVar1[3] = 1;
      if (0 < (int)param_1) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined1 *)(puVar1[4] + -1 + iVar3) = 0;
        } while (iVar3 < (int)param_1);
      }
    }
    DAT_0073b788 = 1;
    DAT_0073b784 = puVar1;
  }
  ExceptionList = local_c;
  return;
}


