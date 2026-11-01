
/* ==== FUN_00493410 @ 00493410 ==== 
 * signature: undefined __fastcall FUN_00493410(int param_1)
 * body: 00493410-00493456;0049345a-00493492
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00493457-00493459
 */

void __fastcall FUN_00493410(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_005d2ab0 + 1;
  *(int *)(param_1 + 0x48) = iVar2;
  pvVar1 = operator_new(iVar2 * 0xc);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)(param_1 + 0x44) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      iVar3 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x44) + iVar3);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
        *puVar4 = DAT_007127d0;
        puVar4[1] = DAT_007127d4;
        puVar4[2] = DAT_007127d8;
      } while (iVar2 < *(int *)(param_1 + 0x48));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Not_enough_memory_for_or_005ad1a8);
}


