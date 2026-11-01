
/* ==== FUN_004c6dd0 @ 004c6dd0 ==== 
 * signature: undefined4 __stdcall FUN_004c6dd0(void)
 * body: 004c6dd0-004c6e4a
 */

undefined4 FUN_004c6dd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_00740950 != 0) {
    FUN_004c6d80();
    iVar4 = 0;
    if (0 < DAT_00740928) {
      iVar3 = 0;
      iVar2 = DAT_00740934;
      do {
        if (*(int *)(iVar3 + 0x30 + iVar2) != 0) {
          if (*(int *)(iVar3 + 0x34 + iVar2) == 1) {
            piVar1 = *(int **)(iVar3 + 0x2c + iVar2);
            (**(code **)(*piVar1 + 8))(piVar1);
            iVar2 = DAT_00740934;
          }
          piVar1 = *(int **)(iVar3 + 0x28 + iVar2);
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar3 + 0x30 + DAT_00740934) = 0;
          *(undefined4 *)(iVar3 + 0x38 + DAT_00740934) = 0;
          iVar2 = DAT_00740934;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar4 < DAT_00740928);
    }
    return 0;
  }
  return 0;
}


