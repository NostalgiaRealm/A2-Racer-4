
/* ==== FUN_00493f50 @ 00493f50 ==== 
 * signature: undefined1 * __stdcall FUN_00493f50(undefined1 * param_1, int param_2)
 * body: 00493f50-0049405d
 */

undefined1 * FUN_00493f50(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_14 [2];
  char local_c [11];
  undefined1 local_1;
  
  local_14[1] = 0;
  FUN_00494060(param_2,local_14 + 1,local_14,&param_2);
  FUN_00559677(local_c,0xb,(byte *)s__02d__02d__d_005ad4e8);
  *param_1 = (undefined1)param_2;
  uVar3 = 0xffffffff;
  local_1 = 0;
  pcVar5 = local_c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(param_1,'\x01');
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar3 <= *(uint *)(param_1 + 0xc))) goto LAB_00494031;
    FUN_004028f0(param_1,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(param_1,'\0');
    return param_1;
  }
  FUN_00402b20(uVar3);
LAB_00494031:
  pcVar5 = local_c;
  pcVar6 = *(char **)(param_1 + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)(param_1 + 8) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
  return param_1;
}


