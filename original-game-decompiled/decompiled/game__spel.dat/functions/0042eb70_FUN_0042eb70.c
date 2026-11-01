
/* ==== FUN_0042eb70 @ 0042eb70 ==== 
 * signature: undefined __thiscall FUN_0042eb70(void * this, LPCSTR param_1)
 * body: 0042eb70-0042ec42
 */

void __thiscall FUN_0042eb70(void *this,LPCSTR param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  CHAR local_60 [16];
  undefined4 local_50 [4];
  CHAR local_40 [64];
  
  FUN_004c3d10(param_1,&DAT_00597934,local_40,0x3f);
  iVar4 = -1;
  pcVar2 = local_40;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004a6980((uint)(iVar4 != -2),(byte *)s__s___d__No_sound_type_name_found_0059793c);
  iVar4 = FUN_0049ecb0(&DAT_006fbb5c,local_40);
  *(int *)((int)this + 0x3c) = iVar4;
  iVar4 = FUN_0049eb50(&DAT_006fbb5c,iVar4);
  pcVar2 = *(char **)(iVar4 + 0x1c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  uVar3 = FUN_004c7c50(pcVar2,0);
  *(uint *)(iVar4 + 0x38) = uVar3;
  iVar4 = 0;
  if (0 < *(int *)this) {
    do {
      wsprintfA(local_60,&DAT_00597978,&DAT_00597970,iVar4);
      FUN_0042e890(param_1,local_60,local_50);
      FUN_0042f660(*(void **)((int)this + 0x44),
                   *(undefined4 **)((int)*(void **)((int)this + 0x44) + 8),1,local_50);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)this);
  }
  return;
}


