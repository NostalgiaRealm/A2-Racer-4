
/* ==== FUN_00456b20 @ 00456b20 ==== 
 * signature: undefined __cdecl FUN_00456b20(int param_1)
 * body: 00456b20-00456bea
 */

void __cdecl FUN_00456b20(int param_1)

{
  int iVar1;
  
  if ((((DAT_006fb8a0 == 0) || (DAT_006fb8a0 == 7)) || (DAT_006fb8a0 == 8)) && (DAT_006fcde0 != 0))
  {
    iVar1 = param_1 * 0xf0 + DAT_00715e50;
    if (*(int *)(iVar1 + 0x38) < *(int *)(iVar1 + 0x34)) {
      FUN_00456a30();
      if (DAT_006fb8fc <= DAT_006fb8f8) {
        FUN_004c3fa0((byte *)s_car_is_finished_005a39d0);
        FUN_00456b00();
        FUN_0044cda0(3);
        DAT_006fcf8c = FUN_00448470(0xb);
        *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x54 + DAT_00715e50) = 1;
        DAT_006fba98 = 1;
        if (DAT_005d2ab0 < DAT_006fbaa4) {
          DAT_006fbaa4 = DAT_005d2ab0;
          return;
        }
      }
    }
    else {
      FUN_004c3fa0((byte *)s_car_is_trying_to_finish_illegal_005a39e4);
      DAT_006fcde0 = 0;
    }
  }
  return;
}


