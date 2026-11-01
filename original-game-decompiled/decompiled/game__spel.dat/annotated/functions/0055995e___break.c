
/* ==== __break @ 0055995e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055995e-0055995e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


