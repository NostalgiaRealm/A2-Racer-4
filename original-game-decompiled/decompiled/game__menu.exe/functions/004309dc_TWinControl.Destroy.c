
/* ==== TWinControl.Destroy @ 004309dc ==== 
 * signature: undefined __register TWinControl.Destroy(int * param_1, char param_2)
 * body: 004309dc-00430aac
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
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_0041581c((int)piVar1);
  if ((char)piVar1[0x51] != '\0') {
    *(undefined1 *)(piVar1 + 0x51) = 0;
    FUN_0042c648((int)piVar1,'\0',extraout_ECX);
  }
  FUN_00405860(piVar1 + 0x52);
  FUN_00402f9c((int *)piVar1[0x50]);
  if (piVar1[9] != 0) {
    FUN_0043157c(piVar1,'\x01');
  }
  if (piVar1[0x53] != 0) {
    (**(code **)(*piVar1 + 0x9c))();
  }
  iVar2 = FUN_004317bc((int)piVar1);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_00431780((int)piVar1,iVar2 + -1);
    FUN_004315e8((int)piVar1,piVar3);
    (**(code **)(*piVar3 + -4))(piVar3,1);
    iVar2 = FUN_004317bc((int)piVar1);
  }
  FUN_00402f9c((int *)piVar1[0x4c]);
  if (piVar1[0x57] != 0) {
    FUN_00444618(piVar1[0x57]);
  }
  TControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


