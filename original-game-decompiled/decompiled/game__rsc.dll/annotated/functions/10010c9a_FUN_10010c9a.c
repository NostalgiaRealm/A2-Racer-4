
/* ==== FUN_10010c9a @ 10010c9a ==== 
 * signature: int __fastcall FUN_10010c9a(byte * param_1, byte * param_2)
 * body: 10010c9a-10010cd3
 */

int __fastcall FUN_10010c9a(byte *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)param_2 & 1) == 0) {
LAB_10010cb8:
    uVar1 = *(undefined2 *)param_2;
    param_2 = param_2 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < *param_1;
    if (bVar4 != *param_1) goto LAB_10010c94;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < param_1[1];
    if (bVar4 != param_1[1]) goto LAB_10010c94;
    if (bVar4 == 0) {
      return 0;
    }
    param_1 = param_1 + 2;
  }
  else {
    bVar4 = *param_2;
    param_2 = param_2 + 1;
    bVar5 = bVar4 < *param_1;
    if (bVar4 != *param_1) goto LAB_10010c94;
    param_1 = param_1 + 1;
    if (bVar4 == 0) {
      return 0;
    }
    if (((uint)param_2 & 2) != 0) goto LAB_10010cb8;
  }
  while( true ) {
    uVar2 = *(undefined4 *)param_2;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < *param_1;
    if (bVar4 != *param_1) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < param_1[1];
    if (bVar4 != param_1[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < param_1[2];
    if (bVar4 != param_1[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < param_1[3];
    if (bVar3 != param_1[3]) break;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10010c94:
  return (uint)bVar5 * -2 + 1;
}


