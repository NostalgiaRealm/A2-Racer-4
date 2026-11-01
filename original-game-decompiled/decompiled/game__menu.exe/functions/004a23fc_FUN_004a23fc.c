
/* ==== FUN_004a23fc @ 004a23fc ==== 
 * signature: undefined FUN_004a23fc(void)
 * body: 004a23fc-004a24e1
 */

void FUN_004a23fc(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int aiStack_1c [4];
  
  bVar7 = 0;
  iVar5 = 0;
  bVar3 = 0;
  do {
    if ((char)param_1[(uint)bVar3 * 4 + 0x7e] != '\0') {
      if ((iVar5 <= param_2) && (param_2 <= param_1[0xa9] + iVar5)) {
        if ((char)param_1[0xc1] == '\0') {
          cVar1 = *(char *)((int)param_1 + (uint)bVar3 * 0x10 + 0x1f9);
        }
        else {
          cVar1 = *(char *)((int)param_1 + (uint)bVar3 * 0x10 + 0x1fb);
        }
        if (cVar1 == '\0') {
          return;
        }
        goto LAB_004a246a;
      }
      iVar5 = iVar5 + param_1[0xa9] + -1;
    }
    bVar3 = bVar3 + 1;
    if (bVar3 == 9) {
LAB_004a246a:
      *(byte *)((int)param_1 + 0x292) = bVar3;
      if (bVar3 != *(byte *)(param_1 + 0xb2)) {
        *(byte *)(param_1 + 0xb2) = bVar3;
        (**(code **)(*param_1 + 0xb4))();
      }
      FUN_0040f7e8(iVar5,0,param_1[0xa9] + iVar5,aiStack_1c,param_1[0xf]);
      piVar4 = aiStack_1c;
      piVar6 = param_1 + 0xa5;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      *(undefined1 *)(param_1 + 0xa4) = 1;
      *(undefined1 *)((int)param_1 + 0x291) = 1;
      FUN_004a1e64(param_1,bVar3,iVar5);
      FUN_0042e950(param_1,'\x01');
      return;
    }
  } while( true );
}


