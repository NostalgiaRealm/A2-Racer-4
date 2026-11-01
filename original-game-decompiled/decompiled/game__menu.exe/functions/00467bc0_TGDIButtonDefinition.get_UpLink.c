
/* ==== TGDIButtonDefinition.get_UpLink @ 00467bc0 ==== 
 * signature: int __register TGDIButtonDefinition.get_UpLink(int param_1, uint param_2)
 * body: 00467bc0-00467cc4
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TGDIButtonDefinition_get_UpLink(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (6 < param_2) {
    FUN_00403c40("Assertion failure");
  }
  iVar1 = *(int *)(param_1 + 0x24 + (param_2 & 0xff) * 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  cVar2 = (**(code **)(*piVar4 + 0x1c))();
  if (cVar2 == '\0') {
    (**(code **)(*piVar4 + 0x3c))(piVar4,*(undefined1 *)(param_1 + 0x54));
    uVar3 = FUN_00403114(piVar4,(int)&PTR_TPersistent_vmt_000_00454aa4);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_00403114(piVar4,(int)FUN_004173a4);
      if ((char)uVar3 == '\0') {
        uVar3 = FUN_00403114(piVar4,(int)&PTR_TPersistent_vmt_000_0045b71c);
        if ((char)uVar3 != '\0') {
          piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_0045b71c);
          (**(code **)(*piVar4 + 0x88))(piVar4,(char)piVar4[0x15]);
          (**(code **)(*piVar4 + 0x84))(piVar4,piVar4[0x14]);
        }
      }
      else {
        piVar4 = (int *)FUN_0040312c(piVar4,(int)FUN_004173a4);
        FUN_0041ee80(piVar4,(char)piVar4[0xc]);
        uVar6 = FUN_0041e000(piVar4);
        FUN_0041ee30(piVar4,uVar6);
      }
    }
    else {
      piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_00454aa4);
      FUN_0045727c(piVar4,(char)piVar4[0x22]);
      iVar5 = FUN_00456a14((int)piVar4);
      FUN_00457260(piVar4,iVar5);
    }
  }
  return iVar1;
}


