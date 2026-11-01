
/* ==== FUN_00421d80 @ 00421d80 ==== 
 * signature: undefined4 __cdecl FUN_00421d80(int param_1)
 * body: 00421d80-00421e84;00421e88-00421e91
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00421e85-00421e87
 */

undefined4 __cdecl FUN_00421d80(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  undefined4 local_18 [6];
  
  local_18[2] = 0x28;
  local_18[3] = 0x28;
  local_18[4] = 0x28;
  local_18[5] = 0x28;
  local_18[0] = 0x26;
  local_18[1] = 0x27;
  iVar4 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  puVar1 = FUN_0040ebe0();
  if ((iVar4 < 0) || (iVar2 = (*(code *)**(undefined4 **)(puVar1 + 0x24))(), iVar2 <= iVar4)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  FUN_004a6980(iVar2,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar2 = 3;
  pfVar5 = (float *)(*(int *)(*(int *)(puVar1 + 0x28) + 4) + iVar4 * 0x54 + 0x38);
  do {
    lVar6 = __ftol();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar3 = FUN_00558625();
  param_1 = (int)uVar3 % (int)lVar6;
  iVar4 = 0;
  do {
    if ((float)param_1 < *pfVar5) {
      if (iVar4 < 3) {
        return local_18[iVar4];
      }
      break;
    }
    lVar6 = __ftol();
    param_1 = (int)lVar6;
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (iVar4 < 3);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Error_generating_behavi_0059506c);
}


