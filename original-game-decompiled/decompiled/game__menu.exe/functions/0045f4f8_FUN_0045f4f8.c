
/* ==== FUN_0045f4f8 @ 0045f4f8 ==== 
 * signature: undefined __register FUN_0045f4f8(uint param_1, char param_2, undefined4 * param_3)
 * body: 0045f4f8-0045f5d8;0045f5eb-0045f600
 */

void FUN_0045f4f8(uint param_1,char param_2,undefined4 *param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_210;
  code *pcStackY_20c;
  undefined1 *puStackY_208;
  undefined4 uStackY_204;
  code *pcStackY_200;
  code *pcStackY_1fc;
  undefined4 in_stack_fffffe08;
  undefined4 in_stack_fffffe0c;
  undefined4 local_1dc [115];
  undefined4 *local_10;
  undefined1 local_9;
  uint local_8;
  
  local_9 = 0;
  if (param_2 != '\0') {
    pcStackY_1fc = (code *)0x45f510;
    param_1 = FUN_0040329c(param_1,param_2,param_3,in_stack_fffffe08,in_stack_fffffe0c);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  pcStackY_1fc = (code *)0x45f521;
  local_10 = param_3;
  local_8 = param_1;
  FUN_00404090((int)param_3);
  pcStackY_200 = thunk_FUN_004036bc;
  uStackY_204 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_204;
  puStackY_208 = (undefined1 *)0x45f53d;
  pcStackY_1fc = (code *)&stack0xfffffffc;
  FUN_00403cb0((int *)(local_8 + 4),local_10);
  *(undefined1 *)(local_8 + 0xc) = 1;
  puStackY_208 = (undefined1 *)0x45f549;
  DVar1 = GetTickCount();
  if ((int)DVar1 < 0) {
    puStackY_208 = (undefined1 *)0x45f552;
    DVar1 = thunk_FUN_00402808(DVar1);
  }
  *(DWORD *)(local_8 + 0x14) = DVar1;
  puStackY_208 = (undefined1 *)0x45f563;
  uVar2 = FUN_004087a4(*(undefined **)(local_8 + 4));
  if ((char)uVar2 == '\0') {
    pcStackY_20c = thunk_FUN_00403408;
    uStackY_210 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_210;
    puStackY_208 = &stack0xfffffffc;
    FUN_00405b82(local_1dc,*(char **)(local_8 + 4));
    FUN_00405ca2((undefined *)local_1dc);
    FUN_0040284c();
    puVar3 = (undefined *)
             FUN_00404274((undefined *)local_1dc,"----------------- new run --------------");
    FUN_00405d7b(puVar3);
    FUN_0040284c();
    FUN_00405c24((undefined *)local_1dc);
    FUN_0040284c();
    *in_FS_OFFSET = uStackY_210;
  }
  else {
    puStackY_208 = (undefined1 *)0x45f574;
    FUN_0045fe88(local_8,0x45f634);
  }
  *in_FS_OFFSET = uStackY_204;
  pcStackY_1fc = FUN_0045f608;
  pcStackY_200 = (code *)0x45f600;
  FUN_00403c5c((int *)&local_10);
  return;
}


