
/* ==== FUN_0045d1ec @ 0045d1ec ==== 
 * signature: undefined FUN_0045d1ec(void)
 * body: 0045d1ec-0045d295
 */

void FUN_0045d1ec(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  byte *pbStack_14;
  uint *puStack_10;
  undefined4 *puStack_c;
  uint *puStack_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  uVar3 = 0;
  puStack_8 = (uint *)0x0;
  puStack_c = (undefined4 *)0x0;
  puStack_10 = (uint *)0x0;
  pbStack_14 = (byte *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 == 0) {
    FUN_00403c40("Assertion failure");
    uVar3 = extraout_ECX;
    pcVar1 = pcStack_20;
  }
  pcStack_20 = pcVar1;
  if ((char)param_1[1] == '\x01') {
    FUN_00414e1c(param_2,(int *)&puStack_8,uVar3);
    TDaviLinkedGraphic_set_Filename(param_1,puStack_8);
  }
  else {
    FUN_00414e1c(param_2,(int *)&puStack_c,uVar3);
    FUN_00403cb0(param_1 + 2,puStack_c);
    FUN_00408a68((undefined *)param_1[2],(int *)&pbStack_14);
    FUN_0040822c(pbStack_14,(int *)&puStack_10);
    cVar2 = FUN_0045cbd0(param_1,puStack_10);
    FUN_0045cca0(param_1,cVar2);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0045d29d;
  pcStack_24 = (code *)0x45d295;
  FUN_00403c80((int *)&pbStack_14,4);
  return;
}


