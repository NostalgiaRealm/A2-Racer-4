
/* ==== FUN_004932a0 @ 004932a0 ==== 
 * signature: undefined1 * __stdcall FUN_004932a0(undefined1 * param_1, undefined4 param_2)
 * body: 004932a0-00493341;00493345-00493404
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00493342-00493344
 */

undefined1 * FUN_004932a0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  CHAR *pCVar6;
  CHAR *pCVar7;
  CHAR local_50 [16];
  CHAR local_40 [64];
  
  FUN_004489a0(&DAT_006fa558,(byte *)s_GAME_INI_005ad0e4,(byte *)s_Game_Settings_005ad0d4);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005ad0f0);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  wsprintfA(local_50,&DAT_005ad100,param_2);
  FUN_004c3d10(s_Portraits_005ace70,local_50,local_40,0x3f);
  iVar2 = -1;
  pcVar3 = local_40;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Element_name_for_car__d_n_005ad13c);
  }
  uVar4 = 0xffffffff;
  pcVar3 = local_40;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 4) = 0;
  uVar4 = ~uVar4 - 1;
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      FUN_004028f0(param_1,'\x01');
      return param_1;
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar4 <= *(uint *)(param_1 + 0xc))) goto LAB_004933d8;
    FUN_004028f0(param_1,'\x01');
  }
  else if (uVar4 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(param_1,'\0');
    return param_1;
  }
  FUN_00402b20(uVar4);
LAB_004933d8:
  pCVar6 = local_40;
  pCVar7 = *(CHAR **)(param_1 + 4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pCVar7 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pCVar7 = pCVar7 + 1;
  }
  *(uint *)(param_1 + 8) = uVar4;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar4) = 0;
  return param_1;
}


