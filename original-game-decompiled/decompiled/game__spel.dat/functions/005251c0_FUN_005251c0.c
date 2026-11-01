
/* ==== FUN_005251c0 @ 005251c0 ==== 
 * signature: undefined __stdcall FUN_005251c0(void)
 * body: 005251c0-005253c7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005251c0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  char *pcVar4;
  
  DAT_0074c654 = 1;
  do {
    iVar2 = __setjmp3((undefined4 *)&DAT_0074c57c,0,unaff_EDI,unaff_ESI);
    if (iVar2 != 0) {
      DAT_0074ccb8 = DAT_0074ccb8 + 1;
      if ((double)CONCAT44(_DAT_0074ccc4,_DAT_0074ccc0) <
          (double)CONCAT44(DAT_0074c66c,DAT_0074c668)) {
        _DAT_0074ccc0 = DAT_0074c668;
        _DAT_0074ccc4 = DAT_0074c66c;
      }
      DAT_0074c70c = 0;
      DAT_0074bfe4 = 1;
    }
    if ((DAT_0074bfc4 != 0) ||
       (8.988465674311579e+307 <= (double)CONCAT44(DAT_0074c66c,DAT_0074c668))) {
      if ((DAT_0074c658 != 0) && (DAT_0074bfc4 <= DAT_0074c658)) {
        DAT_0074c654 = 0;
        return;
      }
    }
    else {
      if (100 < DAT_0074c658) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_precision_error___d_attemp_005c0a2c);
        FUN_0051e8e0(5,(int *)0x0);
      }
      if ((DAT_0074c658 != 0) && (iVar2 == 0)) {
        DAT_0074c654 = 0;
        return;
      }
    }
    DAT_0074bfe4 = 0;
    FUN_0051aa40(1);
    DAT_0074c658 = DAT_0074c658 + 1;
    if (DAT_0074c45c == 0) {
      uVar3 = 0xffffffff;
      pcVar4 = &DAT_0074c258;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      DAT_0074c45c = ~uVar3 - 1;
    }
    else {
      (&DAT_0074c258)[DAT_0074c45c] = 0;
      DAT_0074c458 = 0x50;
    }
    FUN_0051df40(&DAT_005c0a24,0x74c658,0);
    if ((DAT_0074c658 == DAT_0074bfc4) &&
       (((DAT_0074be68 = DAT_0074bff4, DAT_0074bff8 != -1 ||
         (_DAT_0074c000 < 8.988465674311579e+307)) ||
        (DAT_0074c788 = DAT_0074be68, DAT_0074c008 != 0)))) {
      DAT_0074bff0 = DAT_0074bff4;
      if (DAT_0074bff4 == 0) {
        DAT_0074bff0 = 3;
      }
      DAT_0074be68 = 0;
      DAT_0074c788 = DAT_0074be68;
    }
    if ((double)CONCAT44(DAT_0074c66c,DAT_0074c668) < 8.988465674311579e+307) {
      FUN_0052ac30();
    }
    FUN_00518ad0();
    FUN_005253d0(unaff_EDI);
    if (((double)CONCAT44(DAT_0074c66c,DAT_0074c668) < 8.988465674311579e+307) &&
       (DAT_0074be98 == 0)) {
      FUN_00516cc0(DAT_0074c600,0);
    }
  } while( true );
}


