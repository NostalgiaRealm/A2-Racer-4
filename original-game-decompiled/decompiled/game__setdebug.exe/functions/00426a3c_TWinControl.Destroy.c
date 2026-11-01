
/* ==== TWinControl.Destroy @ 00426a3c ==== 
 * signature: undefined __register TWinControl.Destroy(int * param_1, char param_2)
 * body: 00426a3c-00426b0c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TWinControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00413c68((int)piVar1);
  if ((char)piVar1[0x51] != '\0') {
    *(undefined1 *)(piVar1 + 0x51) = 0;
    FUN_00422708((int)piVar1,'\0',extraout_ECX);
  }
  FUN_004052f0(piVar1 + 0x52);
  FUN_00402d14((int *)piVar1[0x50]);
  if (piVar1[9] != 0) {
    FUN_004275dc(piVar1,'\x01');
  }
  if (piVar1[0x53] != 0) {
    (**(code **)(*piVar1 + 0x9c))();
  }
  iVar2 = FUN_0042781c((int)piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_004277e0((int)piVar1,iVar2 + -1);
    FUN_00427648((int)piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_0042781c((int)piVar1);
  }
  FUN_00402d14((int *)piVar1[0x4c]);
  if (piVar1[0x57] != 0) {
    FUN_00439c68(piVar1[0x57]);
  }
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


