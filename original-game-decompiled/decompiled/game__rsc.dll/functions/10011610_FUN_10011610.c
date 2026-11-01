
/* ==== FUN_10011610 @ 10011610 ==== 
 * signature: bool __stdcall FUN_10011610(char * param_1)
 * body: 10011610-100116bb
 */

bool FUN_10011610(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10011a50(param_1);
  iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316a8 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_100316bc = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_100134c0(DAT_100316b8,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_10011790((short)iVar2);
      if (iVar3 != 0) {
        DAT_100316bc = DAT_100316bc | 4;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


