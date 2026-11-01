
/* ==== FUN_0049d880 @ 0049d880 ==== 
 * signature: undefined __thiscall FUN_0049d880(void * this, void * param_1)
 * body: 0049d880-0049d9c8
 */

void __thiscall FUN_0049d880(void *this,void *param_1)

{
  void *this_00;
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  this_00 = (void *)((int)this + 0x1c);
  FUN_004093c0(this_00,param_1,0,0xffffffff);
  uVar5 = 0;
  if (*(int *)((int)param_1 + 8) != 0) {
    do {
      if ((*(uint *)((int)this + 0x24) < uVar5) || (*(int *)((int)this + 0x20) == 0)) {
        pcVar4 = "";
      }
      else {
        cVar1 = *(char *)(*(int *)((int)this + 0x20) + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          FUN_00402a00(this_00,*(uint *)((int)this + 0x24),'\0');
        }
        if (*(int *)((int)this + 0x20) != 0) {
          *(undefined1 *)(*(int *)((int)this + 0x20) + -1) = 0xff;
        }
        pcVar4 = (char *)(*(int *)((int)this + 0x20) + uVar5);
      }
      if ('`' < *pcVar4) {
        if ((*(uint *)((int)this + 0x24) < uVar5) || (*(int *)((int)this + 0x20) == 0)) {
          pcVar4 = "";
        }
        else {
          cVar1 = *(char *)(*(int *)((int)this + 0x20) + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            FUN_00402a00(this_00,*(uint *)((int)this + 0x24),'\0');
          }
          if (*(int *)((int)this + 0x20) != 0) {
            *(undefined1 *)(*(int *)((int)this + 0x20) + -1) = 0xff;
          }
          pcVar4 = (char *)(*(int *)((int)this + 0x20) + uVar5);
        }
        if (*pcVar4 < '{') {
          uVar2 = *(uint *)((int)this + 0x24);
          if ((uVar2 < uVar5) || (*(int *)((int)this + 0x20) == 0)) {
            pcVar4 = "";
          }
          else {
            cVar1 = *(char *)(*(int *)((int)this + 0x20) + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              if (0xfffffffd < uVar2) {
                FUN_0054b1b4();
              }
              iVar3 = *(int *)((int)this + 0x20);
              if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1))
              {
                if (uVar2 == 0) {
                  if (iVar3 != 0) {
                    FUN_004029e0(this_00,0);
                  }
                }
                else if (*(uint *)((int)this + 0x28) < uVar2) goto LAB_0049d98d;
              }
              else if (uVar2 == 0) {
                *(char *)(iVar3 + -1) = cVar1 + -1;
                FUN_004028f0(this_00,'\0');
              }
              else {
LAB_0049d98d:
                FUN_00402b20(uVar2);
              }
            }
            if (*(int *)((int)this + 0x20) != 0) {
              *(undefined1 *)(*(int *)((int)this + 0x20) + -1) = 0xff;
            }
            pcVar4 = (char *)(*(int *)((int)this + 0x20) + uVar5);
          }
          *pcVar4 = *pcVar4 + -0x20;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)param_1 + 8));
  }
  return;
}


