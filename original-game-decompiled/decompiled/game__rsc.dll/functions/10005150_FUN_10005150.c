
/* ==== FUN_10005150 @ 10005150 ==== 
 * signature: undefined __cdecl FUN_10005150(undefined4 * param_1)
 * body: 10005150-10005408
 */

void __cdecl FUN_10005150(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100073f0(9);
  iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_1003143c;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_10007490(9);
      iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_1002fce0 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_10003050(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_10003050(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_10003050(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_10031c00 == (code *)0x0) {
          FUN_10005410((int)local_8);
        }
        else {
          (*DAT_10031c00)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005410((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_10003050(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005410((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}


