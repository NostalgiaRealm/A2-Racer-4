
/* ==== FUN_0043af57 @ 0043af57 ==== 
 * signature: undefined __cdecl FUN_0043af57(int param_1, uint param_2)
 * body: 0043af57-0043afa7;0043afad-0043b064
 */

void __cdecl FUN_0043af57(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  piVar4 = DAT_007408b0;
  if ((param_1 != 1) && (piVar4 = DAT_00740890, param_1 != 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Illegal_focus_for_fade_o_0059a130);
  }
  iVar1 = FUN_004c48f0(piVar4);
  iVar3 = 0;
  local_4 = 0;
  iVar2 = DAT_005b3798;
  if (0 < DAT_005b379c) {
    do {
      iVar5 = 0;
      if (0 < iVar2 / 2) {
        piVar4 = (int *)(iVar1 + iVar3 * 4);
        do {
          *piVar4 = (((param_2 & 0x1f) << 6 | param_2 >> 8 & 0xff) << 5 | param_2 >> 0x10 & 0xff) *
                    0x10001;
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
          iVar2 = DAT_005b3798;
        } while (iVar5 < DAT_005b3798 / 2);
      }
      iVar3 = iVar3 + (local_8 >> 2);
      local_4 = local_4 + 1;
    } while (local_4 < DAT_005b379c);
  }
  FUN_004c4980(param_1,iVar1);
  return;
}


