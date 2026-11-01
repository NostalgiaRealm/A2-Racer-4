
/* ==== TDaviGraphicDef.get_UpLink @ 0045dbdc ==== 
 * signature: int __register TDaviGraphicDef.get_UpLink(int param_1, uint param_2)
 * body: 0045dbdc-0045dcdf
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TDaviGraphicDef_get_UpLink(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (6 < param_2) {
    FUN_00403c40("Assertion failure");
  }
  iVar1 = *(int *)(param_1 + 0x24 + (param_2 & 0xff) * 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x3c))(piVar4,*(undefined1 *)(param_1 + 0x54));
    uVar2 = FUN_00403114(piVar4,(int)&PTR_TPersistent_vmt_000_00454aa4);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_00403114(piVar4,(int)FUN_004173a4);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_00403114(piVar4,(int)&PTR_TPersistent_vmt_000_0045b71c);
        if ((char)uVar2 != '\0') {
          piVar3 = (int *)FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_0045b71c);
          (**(code **)(*piVar3 + 0x88))(piVar3,*(undefined1 *)(param_1 + 0x55));
          piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_0045b71c);
          (**(code **)(*piVar4 + 0x84))(piVar4,*(undefined4 *)(param_1 + 0x58));
        }
      }
      else {
        piVar3 = (int *)FUN_0040312c(piVar4,(int)FUN_004173a4);
        FUN_0041ee80(piVar3,*(char *)(param_1 + 0x55));
        piVar4 = (int *)FUN_0040312c(piVar4,(int)FUN_004173a4);
        FUN_0041ee30(piVar4,*(int *)(param_1 + 0x58));
      }
    }
    else {
      piVar3 = (int *)FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_00454aa4);
      FUN_0045727c(piVar3,*(char *)(param_1 + 0x55));
      piVar4 = (int *)FUN_0040312c(piVar4,(int)&PTR_TPersistent_vmt_000_00454aa4);
      FUN_00457260(piVar4,*(int *)(param_1 + 0x58));
    }
  }
  return iVar1;
}


