
/* ==== FUN_0049bae0 @ 0049bae0 ==== 
 * signature: undefined4 * __fastcall FUN_0049bae0(undefined4 * param_1)
 * body: 0049bae0-0049bc4a
 */

undefined4 * __fastcall FUN_0049bae0(undefined4 *param_1)

{
  undefined4 *this;
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 local_119;
  uint local_110 [65];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e96c;
  pvStack_c = ExceptionList;
  this = param_1 + 1;
  ExceptionList = &pvStack_c;
  *(undefined1 *)this = local_119;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_4 = 0;
  param_1[6] = &PTR_FUN_00577174;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = local_119;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  param_1[7] = puVar3;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00577170;
  FUN_0056914e(local_110,0x104);
  uVar5 = 0xffffffff;
  puVar7 = local_110;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar6 = *puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
  } while ((char)uVar6 != '\0');
  uVar5 = ~uVar5 - 1;
  param_1[5] = 0;
  uVar4 = FUN_00402a00(this,uVar5,'\x01');
  if ((char)uVar4 != '\0') {
    puVar7 = local_110;
    puVar8 = (uint *)param_1[2];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar8 = (char)*puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    param_1[3] = uVar5;
    *(undefined1 *)(param_1[2] + uVar5) = 0;
  }
  if (-param_1[3] - 1 < 2) {
    FUN_0054b1b4();
  }
  uVar5 = param_1[3] + 1;
  if (0xfffffffd < uVar5) {
    FUN_0054b1b4();
  }
  iVar2 = param_1[2];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      if (iVar2 == 0) {
        ExceptionList = pvStack_c;
        return param_1;
      }
      FUN_004029e0(this,0);
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (uVar5 <= (uint)param_1[4]) goto LAB_0049bc1b;
  }
  else if (uVar5 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this,'\0');
    ExceptionList = pvStack_c;
    return param_1;
  }
  FUN_00402b20(uVar5);
LAB_0049bc1b:
  *(undefined1 *)(param_1[2] + param_1[3]) = 0x5c;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1[2] + uVar5) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


