
/* ==== unit_012_initialization @ 0041fc5c ==== 
 * signature: undefined unit_012_initialization(void)
 * body: 0041fc5c-0041fd56
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
  
  bVar1 = _DAT_004ac654 == 0;
  _DAT_004ac654 = _DAT_004ac654 + -1;
  if (bVar1) {
    FUN_0041f75c();
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004ac66c);
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
    DAT_004ac65c = GetStockObject(7);
    DAT_004ac660 = GetStockObject(5);
    DAT_004ac664 = GetStockObject(0xd);
    DAT_004ac668 = LoadIconA((HINSTANCE)0x0,&DAT_00007f00);
    FUN_0041f7d8();
    DAT_004ac69c = FUN_004175f4((int *)&DAT_004175cc,'\x01',CONCAT22(extraout_var,0x2c));
    DAT_004ac6a0 = FUN_004175f4((int *)&DAT_004175cc,'\x01',CONCAT22(extraout_var_00,0x10));
    DAT_004ac6a4 = FUN_004175f4((int *)&DAT_004175cc,'\x01',CONCAT22(extraout_var_01,0x10));
    DAT_004ac6ac = FUN_0041f8a8((int *)&DAT_0041f898,'\x01',extraout_ECX);
    DAT_004aa5e0 = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX_00);
    DAT_004ac6a8 = FUN_004105f8((int *)&DAT_0040ead0,'\x01',extraout_ECX_01);
    FUN_0040fcbc((int)&DAT_00416638,0x417d74,0x417d64);
    FUN_0040fcbc((int)&DAT_00416760,0x417f7c,0x417f6c);
  }
  return;
}


