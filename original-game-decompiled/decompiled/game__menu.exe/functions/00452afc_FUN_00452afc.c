
/* ==== FUN_00452afc @ 00452afc ==== 
 * signature: undefined FUN_00452afc(void)
 * body: 00452afc-00452b23
 */

void FUN_00452afc(undefined4 param_1,int param_2,char *param_3,undefined1 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,
                 undefined4 *param_9,int *param_10,undefined4 param_11,int param_12)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar7;
  byte *pbVar5;
  int *piVar6;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  char *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 *in_stack_00000000;
  undefined4 uStack_c;
  code *pcStack_8;
  code *pcStack_4;
  char *pcVar4;
  
  piVar6 = param_10;
  uVar7 = (undefined2)((uint)param_1 >> 0x10);
  bVar3 = (byte)param_1;
  pcVar4 = (char *)CONCAT22(uVar7,CONCAT11(0x2b,bVar3));
  *unaff_ESI = *unaff_ESI + (char)param_3;
  *pcVar4 = *pcVar4 + bVar3;
  *pcVar4 = *pcVar4 + bVar3;
  *param_3 = *param_3 + bVar3;
  *pcVar4 = *pcVar4 + bVar3;
  pbVar5 = (byte *)CONCAT22(uVar7,CONCAT11((byte)param_2 + 0x2b,bVar3));
  *pbVar5 = *pbVar5 + bVar3 + (0xd4 < (byte)param_2);
  *pbVar5 = *pbVar5 | bVar3;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *(uint *)(unaff_ESI + (int)pbVar5 * 2 + 0x69) =
       *(int *)(unaff_ESI + (int)pbVar5 * 2 + 0x69) + param_2 + (uint)CARRY1(bVar1,bVar3);
  out(*unaff_ESI,(short)param_2);
  uVar2 = in(param_8);
  *in_stack_00000000 = uVar2;
  param_9 = (undefined4 *)((int)param_9 + -1);
  out(*param_4,param_8);
  out(*(undefined2 *)(param_4 + 1),param_8);
  param_10 = (int *)param_5;
  if ((char)param_8 != '\0') {
    pcStack_4 = (code *)0x452b36;
    piVar6 = (int *)FUN_0040329c((int)piVar6,(char)param_8,param_9,in_stack_00000000,param_4);
    param_9 = extraout_ECX;
  }
  pcStack_4 = (code *)0x452b45;
  FUN_00404090((int)param_9);
  pcStack_8 = thunk_FUN_004036bc;
  uStack_c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c;
  pcStack_4 = (code *)&param_10;
  FUN_00453bd8(piVar6,'\0',extraout_ECX_00);
  *(undefined1 *)(piVar6 + 1) = 0;
  FUN_00403cb0(piVar6 + 2,param_9);
  piVar6[3] = param_12;
  *in_FS_OFFSET = uStack_c;
  pcStack_4 = FUN_00452b8e;
  pcStack_8 = (code *)0x452b86;
  FUN_00403c5c((int *)&param_9);
  return;
}


