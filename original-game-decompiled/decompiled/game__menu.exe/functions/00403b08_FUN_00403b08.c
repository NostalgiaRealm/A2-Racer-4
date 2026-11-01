
/* ==== FUN_00403b08 @ 00403b08 ==== 
 * signature: undefined __register FUN_00403b08(void)
 * body: 00403b08-00403bfa
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b08(void)

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
  pcVar1 = DAT_004ac03c;
  if (bRam004ac4c8 == 0) {
    while (DAT_004ac03c = pcVar1, pcVar1 != (code *)0x0) {
      DAT_004ac03c = (code *)0x0;
      (*pcVar1)();
      pcVar1 = DAT_004ac03c;
    }
  }
  if (DAT_004ac040 != 0) {
    FUN_00403a84();
    if (DAT_004ac048 == '\0') {
      if (DAT_004aa010 == '\0') {
        MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_004aa034,s_Error_004aa054,0);
      }
    }
    else {
      puVar2 = (undefined *)FUN_00405df8(&DAT_004ac21c,s_Runtime_error_at_00000000_004aa034);
      FUN_00405d7b(puVar2);
    }
    DAT_004ac040 = 0;
  }
  while( true ) {
    if ((bRam004ac4c8 == 2) && (DAT_004ac038 == 0)) {
      DAT_004ac4b0 = 0;
    }
    FUN_0040393c();
    if (((bRam004ac4c8 < 2) || (DAT_004ac038 != 0)) && (_DAT_004ac4b4 != (undefined4 *)0x0)) {
      FUN_00405798(_DAT_004ac4b4,extraout_EDX,extraout_ECX);
      if ((HMODULE)_DAT_004ac4b4[4] != (HMODULE)_DAT_004ac4b4[1]) {
        FreeLibrary((HMODULE)_DAT_004ac4b4[4]);
      }
    }
    FUN_00403914();
    if (bRam004ac4c8 == 1) {
      (*pcRam004ac4cc)();
    }
    if (bRam004ac4c8 != 0) {
      FUN_00403ad4();
    }
    if (DAT_004ac4a4 == (undefined4 *)0x0) break;
    puVar4 = DAT_004ac4a4;
    puVar5 = &DAT_004ac4a4;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(DAT_004ac038);
}


