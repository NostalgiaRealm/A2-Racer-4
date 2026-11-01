
/* ==== FUN_0047dac8 @ 0047dac8 ==== 
 * signature: undefined FUN_0047dac8(void)
 * body: 0047dac8-0047dcdc
 */

void FUN_0047dac8(int *param_1,char param_2,undefined4 param_3,int param_4,LPCSTR param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int *piVar4;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined1 uVar5;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined *puStack_38;
  int *piStack_34;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  char *pcStack_14;
  undefined1 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  pcStack_14 = (char *)0x5;
  do {
    iStack_c = 0;
    pcStack_14 = pcStack_14 + -1;
  } while (pcStack_14 != (char *)0x0);
  LOCK();
  piVar4 = (int *)0x0;
  UNLOCK();
  uVar5 = 0;
  uStack_8 = pcStack_14;
  if (param_2 != '\0') {
    piStack_34 = (int *)0x47daeb;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_ffffffd0,in_stack_ffffffd4);
    piVar4 = extraout_ECX;
    uVar5 = extraout_DL;
  }
  uStack_8 = (char *)CONCAT13(uVar5,(undefined3)uStack_8);
  piStack_34 = (int *)0x47dafa;
  FUN_00404090((int)param_5);
  piStack_34 = (int *)0x47db02;
  FUN_00404090(param_4);
  puStack_38 = &UNK_0047dcdd;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piStack_34 = (int *)&stack0xfffffffc;
  FUN_00402f6c(param_1,'\0',extraout_ECX_00);
  if (param_5 == (LPCSTR)0x0) {
    pcStack_14 = "aCharacterName";
    uStack_10 = 0xb;
    FUN_00409254((byte *)" Parameter \'%s\' cannot be empty",&pcStack_14,0,&iStack_c);
    FUN_00403c40(iStack_c);
  }
  if (param_4 == 0) {
    pcStack_14 = "aCharacterFileName";
    uStack_10 = 0xb;
    FUN_00409254((byte *)" Parameter \'%s\' cannot be empty",&pcStack_14,0,(int *)&stack0xffffffe8);
    FUN_00403c40(unaff_EBX);
  }
  FUN_00403cb0(param_1 + 3,(undefined4 *)param_5);
  param_1[4] = 200;
  param_1[5] = 0xaa;
  piVar1 = TOleControl_vmt_02c((int *)&PTR_TWinControl_vmt_000_004722b8,'\x01',piVar4);
  param_1[1] = (int)piVar1;
  uVar2 = FUN_0040312c(piVar4,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  (**(code **)(*piVar1 + 0x60))(piVar1,uVar2);
  iVar3 = TBalloonForm_vmt_02c(&PTR_TWinControl_vmt_000_004776e8,1,param_1[1]);
  param_1[2] = iVar3;
  TBalloonForm_set_BalloonStyle(iVar3,1);
  FUN_00477c98(param_1[2],0);
  FUN_0047d4d0((int *)param_1[2],200,0xaa);
  iVar3 = param_1[1];
  *(int **)(iVar3 + 0x294) = param_1;
  *(code **)(iVar3 + 0x290) = FUN_0047df80;
  *(int **)(iVar3 + 0x2dc) = param_1;
  *(code **)(iVar3 + 0x2d8) = FUN_0047df90;
  iVar3 = param_1[2];
  *(int **)(iVar3 + 0x2ec) = param_1;
  *(undefined **)(iVar3 + 0x2e8) = &UNK_0047de80;
  iVar3 = param_1[1];
  *(int **)(iVar3 + 0x284) = param_1;
  *(code **)(iVar3 + 0x280) = FUN_0047df98;
  FUN_00405860((int *)&stack0xffffffe4);
  FUN_00404f74(&stack0xffffffd4,param_4);
  FUN_004043f8((BSTR)&stack0xffffffd0,param_5);
  FUN_00472904(iVar3,(int *)&piStack_34);
  piVar4 = piStack_34;
  iVar3 = (**(code **)(*piStack_34 + 0x2c))();
  FUN_0040595c(iVar3);
  *in_FS_OFFSET = piVar4;
  FUN_00405860((int *)&piStack_34);
  FUN_004042b4((undefined4 *)&stack0xffffffd0);
  FUN_00405038((VARIANTARG *)&stack0xffffffd4);
  FUN_00405860((int *)&stack0xffffffe4);
  FUN_00403c5c((int *)&stack0xffffffe8);
  FUN_00403c5c(&iStack_c);
  FUN_00403c80(&param_4,2);
  return;
}


