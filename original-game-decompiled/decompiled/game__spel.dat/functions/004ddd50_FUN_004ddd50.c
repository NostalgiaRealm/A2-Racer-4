
/* ==== FUN_004ddd50 @ 004ddd50 ==== 
 * signature: int * __thiscall FUN_004ddd50(void * this, int * param_1)
 * body: 004ddd50-004dde5a
 */

int * __thiscall FUN_004ddd50(void *this,int *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 local_18 [2];
  undefined4 auStack_10 [4];
  
  puVar5 = *(undefined4 **)((int)this + 8);
  pcVar1 = (char *)0x0;
  if (puVar5 == *(undefined4 **)((int)this + 0xc)) {
    return param_1;
  }
  do {
    puVar2 = (undefined4 *)FUN_0054ee09(local_18,4);
    if (param_1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
    }
    (*(code *)*puVar2)(iVar4,puVar2[1]);
    *(undefined1 *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1) = 0x30;
    puVar2 = (undefined4 *)FUN_0054eddc(auStack_10,0x80);
    if (param_1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
    }
    (*(code *)*puVar2)(iVar4,puVar2[1]);
    pcVar6 = &DAT_005b73d8;
    piVar3 = FUN_004d4130(param_1,pcVar1);
    piVar3 = FUN_004d4cd0(piVar3,pcVar6);
    puVar2 = (undefined4 *)FUN_0054edbb((undefined4 *)&stack0x00000000,0x80);
    if (piVar3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*piVar3 + 4) + (int)piVar3;
    }
    (*(code *)*puVar2)(iVar4,puVar2[1]);
    *(undefined1 *)(*(int *)(*piVar3 + 4) + 0x30 + (int)piVar3) = 0x20;
    FUN_004e3ed0((void *)*puVar5,(char)param_1);
    FUN_004d4cd0(param_1,&DAT_005ae60c);
    puVar5 = puVar5 + 1;
    pcVar1 = pcVar1 + 1;
  } while (puVar5 != *(undefined4 **)((int)this + 0xc));
  return param_1;
}


