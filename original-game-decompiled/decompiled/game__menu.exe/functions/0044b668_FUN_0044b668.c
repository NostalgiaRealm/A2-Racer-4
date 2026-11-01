
/* ==== FUN_0044b668 @ 0044b668 ==== 
 * signature: undefined __register FUN_0044b668(int param_1)
 * body: 0044b668-0044b719
 */

void FUN_0044b668(int param_1)

{
  BOOL BVar1;
  HFONT pHVar2;
  HGDIOBJ pvVar3;
  LOGFONTA local_194;
  undefined4 local_158 [40];
  LOGFONTA local_b8;
  LOGFONTA local_7c [2];
  
  BVar1 = SystemParametersInfoA(0x1f,0x3c,&local_194,0);
  if (BVar1 == 0) {
    pvVar3 = GetStockObject(0xd);
    FUN_004183d0(*(int **)(param_1 + 0x78),pvVar3);
  }
  else {
    pHVar2 = CreateFontIndirectA(&local_194);
    FUN_004183d0(*(int **)(param_1 + 0x78),pHVar2);
  }
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 == 0) {
    TFont_set_Size(*(int **)(param_1 + 0x74),8);
    pvVar3 = GetStockObject(0xd);
    FUN_004183d0(*(int **)(param_1 + 0x7c),pvVar3);
  }
  else {
    pHVar2 = CreateFontIndirectA(local_7c);
    FUN_004183d0(*(int **)(param_1 + 0x74),pHVar2);
    pHVar2 = CreateFontIndirectA(&local_b8);
    FUN_004183d0(*(int **)(param_1 + 0x7c),pHVar2);
  }
  return;
}


