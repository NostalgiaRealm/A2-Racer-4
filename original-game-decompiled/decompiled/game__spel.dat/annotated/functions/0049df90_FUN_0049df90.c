
/* ==== FUN_0049df90 @ 0049df90 ==== 
 * signature: undefined1 * __cdecl FUN_0049df90(undefined1 * param_1, byte * param_2)
 * body: 0049df90-0049e087
 */

undefined1 * __cdecl FUN_0049df90(undefined1 *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_405;
  char local_400 [1024];
  
  FUN_00559854(local_400,0x400,param_2,(undefined4 *)&stack0x0000000c);
  uVar3 = 0xffffffff;
  *param_1 = local_405;
  *(undefined4 *)(param_1 + 4) = 0;
  pcVar5 = local_400;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
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
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar3 <= *(uint *)(param_1 + 0xc))) goto LAB_0049e05a;
    FUN_004028f0(param_1,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(param_1,'\0');
    return param_1;
  }
  FUN_00402b20(uVar3);
LAB_0049e05a:
  pcVar5 = local_400;
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


