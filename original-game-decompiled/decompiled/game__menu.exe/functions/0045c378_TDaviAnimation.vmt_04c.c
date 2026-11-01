
/* ==== TDaviAnimation.vmt_04c @ 0045c378 ==== 
 * signature: undefined TDaviAnimation.vmt_04c(void)
 * body: 0045c378-0045c411
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_04c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte abStack_114 [256];
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined4 *puStack_8;
  
  puStack_120 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_14 = (undefined4 *)0x0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  pcVar4 = "SafeToFile";
  uStack_c = 0xb;
  uStack_10 = param_2;
  FUN_00409254((byte *)"Unable to save to file %s.",&uStack_10,0,(int *)&puStack_8);
  pcVar2 = "Function is not implemented.";
  puVar3 = puStack_8;
  FUN_00402ee4(*param_1,abStack_114);
  FUN_00403e80((int *)&puStack_14,abStack_114);
  uVar1 = FUN_00453d0c((int *)&PTR_EDavilex_vmt_000_00453ba0,'\x01',puStack_14,(undefined4 *)pcVar2,
                       puVar3,(undefined4 *)pcVar4);
  FUN_004036f4(uVar1);
  *in_FS_OFFSET = pcVar2;
  FUN_00403c5c((int *)&puStack_14);
  FUN_00403c5c((int *)&puStack_8);
  return;
}


