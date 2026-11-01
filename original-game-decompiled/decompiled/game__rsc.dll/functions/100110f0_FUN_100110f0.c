
/* ==== FUN_100110f0 @ 100110f0 ==== 
 * signature: bool __stdcall FUN_100110f0(char * param_1)
 * body: 100110f0-10011413
 */

bool FUN_100110f0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
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
      iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_100316bc = 0;
        return true;
      }
      uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
      if (uVar4 == 0) {
        DAT_100316bc = DAT_100316bc | 0x304;
        DAT_100316a4 = iVar2;
        DAT_100316c0 = iVar2;
      }
      else if ((DAT_100316bc & 2) == 0) {
        if ((DAT_100316ac == 0) ||
           (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 != 0)) {
          if (((DAT_100316bc & 1) == 0) && (iVar3 = FUN_10011790((short)iVar2), iVar3 != 0)) {
            DAT_100316bc = DAT_100316bc | 1;
            DAT_100316c0 = iVar2;
          }
        }
        else {
          DAT_100316bc = DAT_100316bc | 2;
          DAT_100316c0 = iVar2;
          sVar5 = _strlen((char *)DAT_100316b4);
          if (sVar5 == DAT_100316ac) {
            DAT_100316a4 = iVar2;
          }
        }
      }
    }
    if ((DAT_100316bc & 0x300) != 0x300) {
      iVar3 = (*DAT_100316c4)(iVar2,(-(uint)(DAT_100316b0 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_100316bc = 0;
        return true;
      }
      uVar4 = FUN_100134c0(DAT_100316b4,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_100316bc | 0x200;
        if (DAT_100316b0 == 0) {
          DAT_100316bc = uVar4;
          if ((DAT_100316ac == 0) || (sVar5 = _strlen((char *)DAT_100316b4), sVar5 != DAT_100316ac))
          {
            DAT_100316bc = DAT_100316bc | 0x100;
            if (DAT_100316a4 == 0) {
              DAT_100316a4 = iVar2;
            }
          }
          else {
            iVar3 = FUN_100117e0(iVar2,1);
            if ((iVar3 != 0) && (DAT_100316bc = DAT_100316bc | 0x100, DAT_100316a4 == 0)) {
              DAT_100316a4 = iVar2;
            }
          }
        }
        else {
          DAT_100316bc = DAT_100316bc | 0x300;
          if (DAT_100316a4 == 0) {
            DAT_100316a4 = iVar2;
          }
        }
      }
      else if ((((DAT_100316b0 == 0) && (DAT_100316ac != 0)) &&
               (iVar3 = FUN_10013590(DAT_100316b4,(char *)local_7c,DAT_100316ac), iVar3 == 0)) &&
              ((iVar3 = FUN_100117e0(iVar2,0), iVar3 != 0 &&
               (DAT_100316bc = DAT_100316bc | 0x100, DAT_100316a4 == 0)))) {
        DAT_100316a4 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_100316bc & 4) != 0);
  }
  return (bool)cVar1;
}


