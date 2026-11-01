
/* ==== TControl.vmt_018 @ 004245c4 ==== 
 * signature: undefined TControl.vmt_018(void)
 * body: 004245c4-00424659
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_018(int *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  uint *puStack_c;
  uint *puStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_c = (uint *)0x0;
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcVar3 = (code *)&stack0xfffffffc;
  puStack_8 = param_2;
  if (((*(byte *)(param_1 + 0x10) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 8) & 1) == 0, pcVar3 = (code *)&stack0xfffffffc, (bool)uVar5)) {
    TLabel_get_Caption((int)param_1,(int *)&puStack_c);
    FUN_00403d48((uint *)param_1[2],puStack_c);
    pcVar3 = pcStack_1c;
    if ((bool)uVar5) {
      piVar1 = (int *)param_1[1];
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_00402e8c(piVar1,(int)&PTR_TControl_vmt_000_00420b14);
        if (((char)uVar4 != '\0') && (pcVar3 = pcStack_1c, (*(byte *)(piVar1 + 8) & 1) != 0))
        goto LAB_00424626;
      }
      bVar2 = true;
      goto LAB_0042462c;
    }
  }
LAB_00424626:
  pcStack_1c = pcVar3;
  bVar2 = false;
LAB_0042462c:
  TComponent_vmt_018(param_1,puStack_8);
  if (bVar2) {
    TLabel_set_Caption((int)param_1,puStack_8);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00424661;
  pcStack_20 = (code *)0x424659;
  FUN_004039b8((int *)&puStack_c);
  return;
}


