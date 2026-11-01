
/* ==== FUN_004877e0 @ 004877e0 ==== 
 * signature: undefined1 * __cdecl FUN_004877e0(undefined1 * param_1, int param_2, int param_3)
 * body: 004877e0-004878ee
 */

undefined1 * __cdecl FUN_004877e0(undefined1 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  LPCSTR pCVar4;
  uint uVar5;
  uint uVar6;
  CHAR *pCVar7;
  char *pcVar8;
  CHAR *pCVar9;
  undefined1 local_85;
  CHAR local_80 [128];
  
  pCVar4 = "";
  if (*(LPCSTR *)(param_3 + 4) != (LPCSTR)0x0) {
    pCVar4 = *(LPCSTR *)(param_3 + 4);
  }
  pCVar3 = *(LPCSTR *)(param_2 + 4);
  if (pCVar3 == (LPCSTR)0x0) {
    pCVar3 = "";
  }
  FUN_004c3d10(pCVar3,pCVar4,local_80,0x7f);
  uVar5 = 0xffffffff;
  *param_1 = local_85;
  *(undefined4 *)(param_1 + 4) = 0;
  pcVar8 = local_80;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < uVar5) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      FUN_004028f0(param_1,'\x01');
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar5 <= *(uint *)(param_1 + 0xc))) goto LAB_004878c1;
    FUN_004028f0(param_1,'\x01');
  }
  else if (uVar5 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(param_1,'\0');
    return param_1;
  }
  FUN_00402b20(uVar5);
LAB_004878c1:
  pCVar7 = local_80;
  pCVar9 = *(CHAR **)(param_1 + 4);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pCVar7;
    pCVar7 = pCVar7 + 4;
    pCVar9 = pCVar9 + 4;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pCVar9 = *pCVar7;
    pCVar7 = pCVar7 + 1;
    pCVar9 = pCVar9 + 1;
  }
  *(uint *)(param_1 + 8) = uVar5;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar5) = 0;
  return param_1;
}


