
/* ==== FUN_100048b0 @ 100048b0 ==== 
 * signature: undefined4 __stdcall FUN_100048b0(void)
 * body: 100048b0-10004c0e
 */

undefined4 FUN_100048b0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_1002fce0 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_100073f0(9);
    iVar3 = FUN_10009810();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_1003143c; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_10004820((char *)(local_c + 7),DAT_1002fcec,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_10004820((char *)((int)local_c + local_c[4] + 0x20),DAT_1002fcec,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_10004820((char *)(local_c + 8),DAT_1002fced,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_10003050(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_10003050(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_10007490(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_10007490(9);
      local_8 = 0;
    }
  }
  return local_8;
}


