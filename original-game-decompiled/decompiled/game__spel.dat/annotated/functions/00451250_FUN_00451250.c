
/* ==== FUN_00451250 @ 00451250 ==== 
 * signature: undefined4 __cdecl FUN_00451250(int param_1, char * param_2)
 * body: 00451250-0045137c
 */

undefined4 __cdecl FUN_00451250(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a648;
  local_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      local_18 = local_18 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_18 = *param_2;
      param_2 = param_2 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(local_1c,uVar4);
  }
  local_4 = 0;
  iVar6 = param_1 * 0xf0;
  FUN_004a7be0((void *)(DAT_00715e50 + iVar6),local_1c);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  iVar1 = iVar6 + DAT_00715e50;
  fVar8 = FUN_004a67f0(0x7128b0);
  *(float *)(iVar1 + 0xb4) = (float)fVar8;
  *(undefined4 *)(iVar6 + 0xb0 + DAT_00715e50) = 0xbf800000;
  *(undefined4 *)(iVar6 + 0x58 + DAT_00715e50) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0xe0 + DAT_00715e50) = 0;
  *(undefined4 *)(iVar6 + 0x2c + DAT_00715e50) = 0;
  uVar3 = FUN_004a7bd0(DAT_00715e50 + iVar6);
  FUN_00477b90(param_1,uVar3);
  ExceptionList = local_c;
  return 1;
}


