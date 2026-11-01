
/* ==== TDaviAnimation.vmt_070 @ 0045bb90 ==== 
 * signature: undefined TDaviAnimation.vmt_070(void)
 * body: 0045bb90-0045bc63
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_070(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_11c = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  if (*(uint *)(param_1[10] + 4) <= param_2) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    pcStack_134 = "Frame index out of bounds.";
    FUN_00403f9c(&iStack_8,4);
    FUN_00403c40(iStack_8);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  piVar3 = (int *)param_1[9];
  if (piVar3 == (int *)0x0) {
    uVar2 = FUN_00451bac(param_1[0xc]);
    if (0 < (int)uVar2) {
      if ((int)param_2 < 0) {
        thunk_FUN_00402808(uVar2);
      }
      piVar3 = (int *)(*(code *)**(undefined4 **)param_1[0xc])();
      FUN_0040312c(piVar3,(int)&PTR_TPersistent_vmt_000_00454aa4);
    }
  }
  else {
    (**(code **)(*piVar3 + 0x1c))(piVar3,param_2);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403c80(&iStack_c,2);
  return;
}


