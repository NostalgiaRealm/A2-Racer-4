
/* ==== TComponent.Destroy @ 004155b8 ==== 
 * signature: undefined __register TComponent.Destroy(int * param_1, char param_2)
 * body: 004155b8-0041563c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TComponent_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int iVar3;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0041581c((int)piVar1);
  if (piVar1[5] != 0) {
    iVar3 = *(int *)(piVar1[5] + 8) + -1;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_004102b0((undefined4 *)piVar1[5],iVar3);
        (**(code **)(*piVar2 + 0x10))(piVar2,piVar1,1);
        if (piVar1[5] == 0) break;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    FUN_00402f9c((int *)piVar1[5]);
    piVar1[5] = 0;
  }
  FUN_004157c4(piVar1);
  if ((int *)piVar1[1] != (int *)0x0) {
    FUN_0041578c((int *)piVar1[1],(int)piVar1);
  }
  TPersistent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


