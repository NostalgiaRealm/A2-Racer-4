
/* ==== TDIBSharedImage.Destroy @ 00455e34 ==== 
 * signature: undefined TDIBSharedImage.Destroy(void)
 * body: 00455e34-00455ebd
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDIBSharedImage_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  byte extraout_DL;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (piVar1[0x109] == 0) {
    BVar2 = FUN_00402794(piVar1[0x110]);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  else {
    if ((HGDIOBJ)piVar1[0x10d] != (HGDIOBJ)0x0) {
      SelectObject((HDC)piVar1[0x108],(HGDIOBJ)piVar1[0x10d]);
    }
    BVar2 = DeleteObject((HGDIOBJ)piVar1[0x109]);
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
  }
  piVar3 = FUN_00455080(BVar2,uVar5,uVar4);
  FUN_00455030((int)piVar3,piVar1 + 0x10e);
  if ((HDC)piVar1[0x108] != (HDC)0x0) {
    DeleteDC((HDC)piVar1[0x108]);
  }
  FUN_00402794(piVar1[3]);
  TObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


