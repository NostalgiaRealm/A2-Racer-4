
/* ==== FUN_0045b9d6 @ 0045b9d6 ==== 
 * signature: undefined4 __cdecl FUN_0045b9d6(undefined4 param_1, undefined4 param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)
 * body: 0045b9d6-0045bd2e
 */

undefined4 __cdecl
FUN_0045b9d6(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  undefined4 in_stack_00000038;
  float in_stack_00000048;
  float in_stack_0000004c;
  undefined4 in_stack_00000050;
  float fStack00000084;
  float fStack00000088;
  undefined4 uStack0000008c;
  int in_stack_000000d8;
  int in_stack_000000dc;
  undefined4 auStack_6c [16];
  undefined4 local_2c;
  
  iVar2 = in_stack_000000dc * 0xf0 + DAT_00715e50;
  uStack0000002c =
       *(undefined4 *)
        (*(int *)(in_stack_000000dc * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x7c);
  uVar1 = *(undefined4 *)(iVar2 + 0xbc);
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 != -1) {
    puVar5 = (undefined4 *)
             (DAT_0073b0d0 + *(int *)(iVar2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    puVar6 = (undefined4 *)&stack0x00000094;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar2 = FUN_004316d0(iVar2);
    if ((iVar2 != -1) && ((&DAT_006c3318)[iVar2 * 0x34] == '\x01')) {
      pfVar3 = (float *)FUN_00431280(&DAT_006c32f0 + iVar2 * 0xd,(undefined4 *)&stack0x0000003c,0);
      param_3 = *pfVar3;
      param_4 = pfVar3[1];
      param_5 = pfVar3[2];
      pfVar3 = (float *)FUN_00431280(&DAT_006c32f0 + iVar2 * 0xd,(undefined4 *)&stack0x0000003c,1);
      goto LAB_0045bb3e;
    }
  }
  puVar5 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(in_stack_000000d8 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar6 = (undefined4 *)&stack0x00000094;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pfVar3 = (float *)FUN_00429280((undefined4 *)&stack0x0000003c,in_stack_000000dc,2);
  param_3 = *pfVar3;
  param_4 = pfVar3[1];
  param_5 = pfVar3[2];
  local_2c = 0x45bb3b;
  pfVar3 = (float *)FUN_00429280((undefined4 *)&stack0x0000003c,in_stack_000000dc,3);
LAB_0045bb3e:
  param_6 = *pfVar3;
  param_7 = pfVar3[1];
  param_8 = pfVar3[2];
  FUN_004bc620(&stack0x00000030,&param_3,(float *)&stack0x00000094);
  local_2c = 0x45bb80;
  FUN_004bc620(&stack0x00000048,&param_6,(float *)&stack0x00000094);
  puVar5 = (undefined4 *)&stack0x00000094;
  puVar6 = (undefined4 *)&stack0x00000054;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  fStack00000088 = in_stack_00000034 - 0.1;
  fStack00000084 = in_stack_00000030;
  uStack0000008c = in_stack_00000038;
  puVar5 = (undefined4 *)&stack0x00000054;
  puVar6 = auStack_6c;
  local_2c = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0045d170(10);
  puVar5 = (undefined4 *)&stack0x00000054;
  puVar6 = auStack_6c;
  local_2c = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0045d170(0xb);
  puVar5 = (undefined4 *)&stack0x00000094;
  puVar6 = (undefined4 *)&stack0x00000054;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  fStack00000088 = in_stack_0000004c - 0.1;
  fStack00000084 = in_stack_00000048;
  uStack0000008c = in_stack_00000050;
  puVar5 = (undefined4 *)&stack0x00000054;
  puVar6 = auStack_6c;
  local_2c = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0045d170(10);
  puVar5 = (undefined4 *)&stack0x00000054;
  puVar6 = auStack_6c;
  local_2c = uVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_0045d170(0xc);
  return 1;
}


