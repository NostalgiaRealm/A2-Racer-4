
/* ==== FUN_0045f668 @ 0045f668 ==== 
 * signature: undefined __register FUN_0045f668(uint param_1, undefined1 param_2, int param_3)
 * body: 0045f668-0045f788;0045f79b-0045f7b5
 */

void FUN_0045f668(uint param_1,undefined1 param_2,int param_3)

{
  DWORD DVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_220;
  code *pcStackY_21c;
  undefined4 uStack_214;
  code *pcStack_210;
  code *pcStack_20c;
  int local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8;
  int local_1e4;
  undefined1 local_1e0;
  undefined4 local_1dc [115];
  undefined1 *local_10;
  int local_c;
  uint local_8;
  
  local_10 = (undefined1 *)0x0;
  pcStack_20c = (code *)0x45f689;
  local_c = param_3;
  local_8 = param_1;
  FUN_00404090(param_3);
  pcStack_210 = thunk_FUN_004036bc;
  uStack_214 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_214;
  pcStack_20c = (code *)&stack0xfffffffc;
  if (local_8 == 0) {
    pcStack_20c = (code *)&stack0xfffffffc;
    FUN_00403c40(" Self = nil: WriteString (aStr : string)");
  }
  if (*(char *)(local_8 + 0xc) != '\0') {
    DVar1 = GetTickCount();
    local_1fc = DVar1 - *(int *)(local_8 + 0x14);
    if (SBORROW4(DVar1,*(int *)(local_8 + 0x14))) {
      thunk_FUN_00402808(local_8);
    }
    local_1f8 = 0;
    local_1f0 = 2;
    local_1ec = *(undefined4 *)(local_8 + 0x10);
    local_1e8 = 0;
    local_1e4 = local_c;
    local_1e0 = 0xb;
    pcStackY_21c = (code *)0x45f728;
    local_1f4 = param_2;
    FUN_00409254((byte *)"%8d %s %2d %s",&local_1fc,3,(int *)&local_10);
    pcStackY_21c = thunk_FUN_00403408;
    uStackY_220 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_220;
    FUN_00405b82(local_1dc,*(char **)(local_8 + 4));
    FUN_00405ca9((undefined *)local_1dc);
    FUN_0040284c();
    puVar2 = (undefined *)FUN_00404274((undefined *)local_1dc,local_10);
    FUN_00405d7b(puVar2);
    FUN_0040284c();
    FUN_00405c24((undefined *)local_1dc);
    FUN_0040284c();
    *in_FS_OFFSET = uStackY_220;
  }
  *in_FS_OFFSET = uStack_214;
  pcStack_20c = FUN_0045f7bd;
  pcStack_210 = (code *)0x45f7b5;
  FUN_00403c80((int *)&local_10,2);
  return;
}


