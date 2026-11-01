
/* ==== FUN_0049b440 @ 0049b440 ==== 
 * signature: undefined1 * __thiscall FUN_0049b440(void * this, undefined1 * param_1)
 * body: 0049b440-0049b552
 */

undefined1 * __thiscall FUN_0049b440(void *this,undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    *param_1 = param_1._0_1_;
    uVar4 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar6 = (char *)&DAT_005ae5d8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(param_1,uVar5,'\x01');
    if ((char)uVar3 == '\0') {
      return param_1;
    }
    pcVar6 = (char *)&DAT_005ae5d8;
    goto LAB_0049b52e;
  }
  *param_1 = param_1._0_1_;
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pcVar6 = s_false_005ae5e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar4 - 1;
  uVar4 = FUN_004095c0();
  if (uVar4 < uVar5) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      FUN_004028f0(param_1,'\x01');
      return param_1;
    }
    if ((0x1f < *(uint *)(param_1 + 0xc)) || (*(uint *)(param_1 + 0xc) < uVar5)) {
      FUN_004028f0(param_1,'\x01');
      goto LAB_0049b51f;
    }
  }
  else {
    if (uVar5 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(param_1,'\0');
      return param_1;
    }
LAB_0049b51f:
    FUN_00402b20(uVar5);
  }
  pcVar6 = s_false_005ae5e0;
LAB_0049b52e:
  pcVar7 = *(char **)(param_1 + 4);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(uint *)(param_1 + 8) = uVar5;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar5) = 0;
  return param_1;
}


