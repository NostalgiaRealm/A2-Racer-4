
/* ==== FUN_100134c0 @ 100134c0 ==== 
 * signature: uint __cdecl FUN_100134c0(byte * param_1, byte * param_2)
 * body: 100134c0-1001358f
 */

uint __cdecl FUN_100134c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = DAT_100317c4;
  if (DAT_1003163c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001350e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1001350e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_100317c4 = DAT_100317c4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100317b4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_100317c4 = iVar2;
      FUN_100073f0(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001356f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10014630(uVar8);
      uVar7 = FUN_10014630(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001356f:
    if (uVar9 == 0) {
      LOCK();
      DAT_100317c4 = DAT_100317c4 + -1;
      UNLOCK();
    }
    else {
      FUN_10007490(0x13);
    }
  }
  return uVar7;
}


