
/* ==== unit_012_initialization @ 0041d224 ==== 
 * signature: undefined unit_012_initialization(void)
 * body: 0041d224-0041d31e
 * note: Name source: Delphi unit init table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi unit init table */

void unit_012_initialization(void)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  bool bVar1;
  
  bVar1 = _DAT_0044764c == 0;
  _DAT_0044764c = _DAT_0044764c + -1;
  if (bVar1) {
    FUN_0041cd24();
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00447664);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
    DAT_00447654 = GetStockObject(7);
    DAT_00447658 = GetStockObject(5);
    DAT_0044765c = GetStockObject(0xd);
    DAT_00447660 = LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
    FUN_0041cda0();
    DAT_00447694 = FUN_0041596c((int *)&DAT_00415944,'\x01',CONCAT22(extraout_var,0x2c));
    DAT_00447698 = FUN_0041596c((int *)&DAT_00415944,'\x01',CONCAT22(extraout_var_00,0x10));
    DAT_0044769c = FUN_0041596c((int *)&DAT_00415944,'\x01',CONCAT22(extraout_var_01,0x10));
    DAT_004476a4 = FUN_0041ce70((int *)&DAT_0041ce60,'\x01',extraout_ECX);
    DAT_004465bc = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX_00);
    DAT_004476a0 = FUN_0040f234((int *)&DAT_0040da10,'\x01',extraout_ECX_01);
    FUN_0040ea80((int)&DAT_00414a84,0x4160ec,0x4160dc);
    FUN_0040ea80((int)&DAT_00414bac,0x4162f4,0x4162e4);
  }
  return;
}


