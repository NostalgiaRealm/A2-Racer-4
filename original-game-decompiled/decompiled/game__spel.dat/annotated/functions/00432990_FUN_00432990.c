
/* ==== FUN_00432990 @ 00432990 ==== 
 * signature: undefined __stdcall FUN_00432990(void)
 * body: 00432990-00432c63
 */

void FUN_00432990(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  
  iVar2 = 0x28;
  iVar3 = 0;
  FUN_00431b00();
  FUN_00432880();
  FUN_004c5930(0,0,0x28,&DAT_00598868);
  iVar1 = FUN_004c5e40(0x1b);
  do {
    if (iVar1 != 0) {
      FUN_00431ad0(0x1b);
      return;
    }
    iVar1 = FUN_004c5e40(0x26);
    if (iVar1 != 0) {
      FUN_004c5930(0,0,iVar2,&DAT_0059886c);
      iVar2 = iVar2 + -0x14;
      iVar3 = iVar3 + -1;
      if (iVar2 < 0x28) {
        iVar2 = 100;
        iVar3 = 3;
      }
      FUN_004c5930(0,0,iVar2,&DAT_00598870);
      FUN_00431ad0(0x26);
    }
    iVar1 = FUN_004c5e40(0x28);
    if (iVar1 != 0) {
      FUN_004c5930(0,0,iVar2,&DAT_00598874);
      iVar2 = iVar2 + 0x14;
      iVar3 = iVar3 + 1;
      if (100 < iVar2) {
        iVar2 = 0x28;
        iVar3 = 0;
      }
      FUN_004c5930(0,0,iVar2,&DAT_00598878);
      FUN_00431ad0(0x28);
    }
    iVar1 = FUN_004c5e40(0x20);
    if (iVar1 != 0) {
      if (iVar3 == 0) {
        DAT_006fbb40 = (DAT_006fbb40 + 1) % 3;
        pbVar6 = &DAT_0059887c;
        iVar1 = 0x28;
LAB_00432acf:
        FUN_004c5930(0,200,iVar1,pbVar6);
      }
      else {
        if (iVar3 == 1) {
          DAT_006fbb50 = (DAT_006fbb50 + 1) % 3;
          pbVar6 = &DAT_00598880;
          iVar1 = 0x3c;
          goto LAB_00432acf;
        }
        if (iVar3 == 2) {
          DAT_006fbb44 = (DAT_006fbb44 + 1) % 3;
          pbVar6 = &DAT_00598884;
          iVar1 = 0x50;
          goto LAB_00432acf;
        }
      }
      FUN_00431ad0(0x20);
    }
    iVar1 = FUN_004c5e40(0x25);
    if (iVar1 != 0) {
      DAT_006fba5c = DAT_006fba5c + -1;
      if (DAT_006fba5c < 0) {
        DAT_006fba5c = 0;
      }
      FUN_00431ad0(0x25);
      FUN_004c5930(0,200,100,&DAT_00598888);
    }
    iVar1 = FUN_004c5e40(0x27);
    if (iVar1 != 0) {
      DAT_006fba5c = DAT_006fba5c + 1;
      if (10 < DAT_006fba5c) {
        DAT_006fba5c = 10;
      }
      FUN_00431ad0(0x27);
      FUN_004c5930(0,200,100,&DAT_0059888c);
    }
    iVar1 = FUN_004c5e40(0x22);
    if (iVar1 != 0) {
      DAT_00597eb0 = DAT_00597eb0 + -1;
      if (DAT_00597eb0 < 0) {
        DAT_00597eb0 = 0;
      }
      FUN_00431ad0(0x22);
      FUN_004c5930(0,200,0x78,&DAT_00598890);
    }
    iVar1 = FUN_004c5e40(0x21);
    if (iVar1 != 0) {
      DAT_00597eb0 = DAT_00597eb0 + 1;
      if (10 < DAT_00597eb0) {
        DAT_00597eb0 = 10;
      }
      FUN_00431ad0(0x21);
      FUN_004c5930(0,200,0x78,&DAT_00598894);
    }
    iVar1 = FUN_004c5e40(0x7b);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(&DAT_006c1c68 + DAT_006fba5c * 0xf0);
      puVar5 = (undefined4 *)(&DAT_006c1c68 + DAT_00597eb0 * 0xf0);
      for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    iVar1 = FUN_004c5e40(0x1b);
  } while( true );
}


