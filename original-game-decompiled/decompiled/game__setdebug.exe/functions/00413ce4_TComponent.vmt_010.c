
/* ==== TComponent.vmt_010 @ 00413ce4 ==== 
 * signature: undefined __register TComponent.vmt_010(int param_1, int param_2, char param_3)
 * body: 00413ce4-00413d3d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponent_vmt_010(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == '\x01') && (param_2 != 0)) {
    FUN_00413cc8(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x10),iVar3);
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


