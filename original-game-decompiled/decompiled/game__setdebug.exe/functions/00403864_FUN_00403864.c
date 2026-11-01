
/* ==== FUN_00403864 @ 00403864 ==== 
 * signature: undefined __register FUN_00403864(void)
 * body: 00403864-00403956
 */

void FUN_00403864(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 *extraout_ECX;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  pcVar1 = DAT_00447034;
  if (DAT_004474c0 == 0) {
    while (DAT_00447034 = pcVar1, pcVar1 != (code *)0x0) {
      DAT_00447034 = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_00447034;
    }
  }
  if (DAT_00447038 != 0) {
    FUN_004037e0();
    if (DAT_00447040 == '\0') {
      if (DAT_00446010 == '\0') {
        MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_00446028,s_Error_00446048,0);
      }
    }
    else {
      puVar2 = (undefined *)FUN_00405840(&DAT_00447214,s_Runtime_error_at_00000000_00446028);
      FUN_004057c3(puVar2);
    }
    DAT_00447038 = 0;
  }
  while( true ) {
    if ((DAT_004474c0 == 2) && (DAT_00447030 == 0)) {
      DAT_004474a8 = 0;
    }
    FUN_004036b4();
    if (((DAT_004474c0 < 2) || (DAT_00447030 != 0)) && (DAT_004474ac != (undefined4 *)0x0)) {
      FUN_00405228(DAT_004474ac,extraout_EDX,extraout_ECX);
      if ((HMODULE)DAT_004474ac[4] != (HMODULE)DAT_004474ac[1]) {
        FreeLibrary((HMODULE)DAT_004474ac[4]);
      }
    }
    FUN_0040368c();
    if (DAT_004474c0 == 1) {
      (*DAT_004474c4)();
    }
    if (DAT_004474c0 != 0) {
      FUN_00403830();
    }
    if (DAT_0044749c == (undefined4 *)0x0) break;
    puVar4 = DAT_0044749c;
    puVar5 = &DAT_0044749c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_00447030);
}


