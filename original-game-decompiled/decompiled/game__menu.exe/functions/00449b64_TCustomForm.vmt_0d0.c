
/* ==== TCustomForm.vmt_0d0 @ 00449b64 ==== 
 * signature: undefined TCustomForm.vmt_0d0(void)
 * body: 00449b64-00449bc6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

uint TCustomForm_vmt_0d0(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uStack_10;
  
  uStack_10 = param_3;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    uStack_10 = param_3 & 0xffffff00;
    iVar2 = FUN_00447428(param_1);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        piVar3 = (int *)FUN_00447474(param_1,iVar4);
        cVar1 = (**(code **)(*piVar3 + 0xd0))();
        if (cVar1 == '\0') goto LAB_00449bbf;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  uStack_10 = CONCAT31(uStack_10._1_3_,1);
  if (*(short *)(param_1 + 0x282) != 0) {
    (**(code **)(param_1 + 0x280))(*(undefined4 *)(param_1 + 0x284),param_1,&uStack_10);
  }
LAB_00449bbf:
  return uStack_10 & 0xff;
}


