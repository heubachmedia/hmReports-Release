extern int32_t vOK;
extern Txt K;
extern Txt KSQL;
extern Txt K_2E4DPreferences;
extern Txt K_5D_2Fcolor;
extern Txt K_5D_2Fstyle;
extern Txt Kalpha;
extern Txt Kblue;
extern Txt Kbold;
extern Txt Kcommands;
extern Txt Kcomments;
extern Txt Kconstants;
extern Txt Kerrors;
extern Txt Kfields;
extern Txt Kgreen;
extern Txt Kitalic;
extern Txt Kkeywords;
extern Txt Kkind;
extern Txt Klocal__variables;
extern Txt Kmethods;
extern Txt Kparameters;
extern Txt Kplain__text;
extern Txt Kplug__ins;
extern Txt Kred;
extern Txt Ktables;
extern Txt Ktrue;
extern Txt Kunderline;
extern Txt k1BjI28eVKhU;
extern Txt kHCe6lKi6HMA;
extern Txt kJ35B4lL_1NQ;
extern Txt kKwkNK7hkRJ8;
extern Txt kPChdRN5ICr4;
extern Txt kyEMAOwCWagY;
Asm4d_Proc proc_UT__GET4DMAINVERSION;
extern unsigned char D_proc_ME__READCODESTYLES[];
void proc_ME__READCODESTYLES( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_ME__READCODESTYLES);
	if (!ctx->doingAbort) try {
		Long v0;
		Txt lvt__bold;
		Long lvl__style;
		Long v1;
		Long li;
		Txt lvt__folder;
		Long lvl__red;
		Txt lvt__italic;
		Txt lvt__name;
		Txt lvt__dom;
		Txt lvt__underline;
		Long lvl__green;
		Long lvl__alpha;
		Value_array_text ltt__elements;
		Long lvl__blue;
		Long lvl__color;
		Txt lvt__element;
		Long lvl__typ;
		Txt lvt__path;
		Long lvl__version;
		{
			Txt t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(0).cv()},1,485)) goto _0;
			g->Check(ctx);
			lvt__folder=t0.get();
		}
		{
			Long t1;
			c.f.fLine=6;
			proc_UT__GET4DMAINVERSION(glob,ctx,0,0,nullptr,t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__version=t1.get();
		}
		{
			Txt t2;
			g->AddString(lvt__folder.get(),kKwkNK7hkRJ8.get(),t2.get());
			Txt t3;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t3.cv(),lvl__version.cv()},1,10)) goto _0;
			Txt t4;
			g->AddString(t2.get(),t3.get(),t4.get());
			g->AddString(t4.get(),K_2E4DPreferences.get(),lvt__path.get());
		}
		{
			Long t6;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t6.cv(),lvt__path.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t6.get()) goto _2;
		}
		{
			Txt t8;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t8.cv(),lvt__path.cv()},1,719)) goto _0;
			g->Check(ctx);
			lvt__dom=t8.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _3;
		{
			Ref t10;
			t10.setLocalRef(ctx,ltt__elements.cv());
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,ltt__elements.cv());
			Txt t12;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t12.cv(),lvt__dom.cv(),k1BjI28eVKhU.cv(),t11.cv()},3,864)) goto _0;
			g->Check(ctx);
			lvt__element=t12.get();
		}
		{
			Ref t13;
			t13.setLocalRef(ctx,ltt__elements.cv());
			Long t14;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv()},1,274)) goto _0;
			if (0!=t14.get()) goto _4;
		}
		c.f.fLine=21;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__dom.cv()},1,722)) goto _0;
		g->Check(ctx);
		{
			Txt t16;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t16.cv(),Long(6).cv()},1,485)) goto _0;
			g->Check(ctx);
			g->AddString(t16.get(),kPChdRN5ICr4.get(),lvt__path.get());
		}
		{
			Txt t18;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t18.cv(),lvt__path.cv()},1,719)) goto _0;
			g->Check(ctx);
			lvt__dom=t18.get();
		}
		{
			Ref t19;
			t19.setLocalRef(ctx,ltt__elements.cv());
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){nullptr,t19.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t20;
			t20.setLocalRef(ctx,ltt__elements.cv());
			Txt t21;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t21.cv(),lvt__dom.cv(),k1BjI28eVKhU.cv(),t20.cv()},3,864)) goto _0;
			g->Check(ctx);
			lvt__element=t21.get();
		}
_4:
		li=1;
		{
			Ref t22;
			t22.setLocalRef(ctx,ltt__elements.cv());
			Long t23;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t23.cv(),t22.cv()},1,274)) goto _0;
			v0=t23.get();
		}
		goto _5;
_6:
		lvt__name=K.get();
		{
			Ref t24;
			t24.setLocalRef(ctx,lvt__name.cv());
			Txt t25;
			t25=ltt__elements.arrayElem(li.get()).get();
			Txt t26;
			t26=t25.get();
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){nullptr,t26.cv(),Kkind.cv(),t24.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t27;
			t27=g->CompareString(ctx,lvt__name.get(),Kplain__text.get())==0;
			if (!(t27.get())) goto _8;
		}
		lvl__typ=1;
		goto _7;
_8:
		{
			Bool t28;
			t28=g->CompareString(ctx,lvt__name.get(),Kcommands.get())==0;
			if (!(t28.get())) goto _9;
		}
		lvl__typ=2;
		goto _7;
_9:
		{
			Bool t29;
			t29=g->CompareString(ctx,lvt__name.get(),Kkeywords.get())==0;
			if (!(t29.get())) goto _10;
		}
		lvl__typ=3;
		goto _7;
_10:
		{
			Bool t30;
			t30=g->CompareString(ctx,lvt__name.get(),Ktables.get())==0;
			if (!(t30.get())) goto _11;
		}
		lvl__typ=4;
		goto _7;
_11:
		{
			Bool t31;
			t31=g->CompareString(ctx,lvt__name.get(),Kfields.get())==0;
			if (!(t31.get())) goto _12;
		}
		lvl__typ=5;
		goto _7;
_12:
		{
			Bool t32;
			t32=g->CompareString(ctx,lvt__name.get(),Kmethods.get())==0;
			if (!(t32.get())) goto _13;
		}
		lvl__typ=6;
		goto _7;
_13:
		{
			Bool t33;
			t33=g->CompareString(ctx,lvt__name.get(),Klocal__variables.get())==0;
			if (!(t33.get())) goto _14;
		}
		lvl__typ=7;
		goto _7;
_14:
		{
			Bool t34;
			t34=g->CompareString(ctx,lvt__name.get(),kJ35B4lL_1NQ.get())==0;
			if (!(t34.get())) goto _15;
		}
		lvl__typ=8;
		goto _7;
_15:
		{
			Bool t35;
			t35=g->CompareString(ctx,lvt__name.get(),kHCe6lKi6HMA.get())==0;
			if (!(t35.get())) goto _16;
		}
		lvl__typ=9;
		goto _7;
_16:
		{
			Bool t36;
			t36=g->CompareString(ctx,lvt__name.get(),Kparameters.get())==0;
			if (!(t36.get())) goto _17;
		}
		lvl__typ=10;
		goto _7;
_17:
		{
			Bool t37;
			t37=g->CompareString(ctx,lvt__name.get(),Kconstants.get())==0;
			if (!(t37.get())) goto _18;
		}
		lvl__typ=11;
		goto _7;
_18:
		{
			Bool t38;
			t38=g->CompareString(ctx,lvt__name.get(),Kplug__ins.get())==0;
			if (!(t38.get())) goto _19;
		}
		lvl__typ=12;
		goto _7;
_19:
		{
			Bool t39;
			t39=g->CompareString(ctx,lvt__name.get(),Kcomments.get())==0;
			if (!(t39.get())) goto _20;
		}
		lvl__typ=13;
		goto _7;
_20:
		{
			Bool t40;
			t40=g->CompareString(ctx,lvt__name.get(),Kerrors.get())==0;
			if (!(t40.get())) goto _21;
		}
		lvl__typ=14;
		goto _7;
_21:
		{
			Bool t41;
			t41=g->CompareString(ctx,lvt__name.get(),KSQL.get())==0;
			if (!(t41.get())) goto _22;
		}
		lvl__typ=15;
		goto _7;
_22:
		lvl__typ=0;
_7:
		if (0>=lvl__typ.get()) goto _23;
		{
			Txt t43;
			c.f.fLine=90;
			if (g->Call(ctx,(PCV[]){t43.cv(),li.cv()},1,10)) goto _0;
			Txt t44;
			g->AddString(kyEMAOwCWagY.get(),t43.get(),t44.get());
			Txt t45;
			g->AddString(t44.get(),K_5D_2Fcolor.get(),t45.get());
			Txt t46;
			if (g->Call(ctx,(PCV[]){t46.cv(),lvt__dom.cv(),t45.cv()},2,864)) goto _0;
			g->Check(ctx);
			lvt__element=t46.get();
		}
		lvl__alpha=0;
		{
			Ref t47;
			t47.setLocalRef(ctx,lvl__alpha.cv());
			c.f.fLine=93;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kalpha.cv(),t47.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvl__red=0;
		{
			Ref t48;
			t48.setLocalRef(ctx,lvl__red.cv());
			c.f.fLine=95;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kred.cv(),t48.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvl__green=0;
		{
			Ref t49;
			t49.setLocalRef(ctx,lvl__green.cv());
			c.f.fLine=97;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kgreen.cv(),t49.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvl__blue=0;
		{
			Ref t50;
			t50.setLocalRef(ctx,lvl__blue.cv());
			c.f.fLine=99;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kblue.cv(),t50.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvl__color=0;
		{
			Long t51;
			t51=(int32_t)((uint32_t)lvl__alpha.get()<<24);
			lvl__color=lvl__color.get()+t51.get();
		}
		{
			Long t53;
			t53=(int32_t)((uint32_t)lvl__red.get()<<16);
			lvl__color=lvl__color.get()+t53.get();
		}
		{
			Long t55;
			t55=(int32_t)((uint32_t)lvl__green.get()<<8);
			lvl__color=lvl__color.get()+t55.get();
		}
		lvl__color=lvl__color.get()+lvl__blue.get();
		{
			Txt t58;
			c.f.fLine=107;
			if (g->Call(ctx,(PCV[]){t58.cv(),li.cv()},1,10)) goto _0;
			Txt t59;
			g->AddString(kyEMAOwCWagY.get(),t58.get(),t59.get());
			Txt t60;
			g->AddString(t59.get(),K_5D_2Fstyle.get(),t60.get());
			Txt t61;
			if (g->Call(ctx,(PCV[]){t61.cv(),lvt__dom.cv(),t60.cv()},2,864)) goto _0;
			g->Check(ctx);
			lvt__element=t61.get();
		}
		lvt__bold=K.get();
		{
			Ref t62;
			t62.setLocalRef(ctx,lvt__bold.cv());
			c.f.fLine=110;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kbold.cv(),t62.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvt__italic=K.get();
		{
			Ref t63;
			t63.setLocalRef(ctx,lvt__italic.cv());
			c.f.fLine=112;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kitalic.cv(),t63.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvt__underline=K.get();
		{
			Ref t64;
			t64.setLocalRef(ctx,lvt__underline.cv());
			c.f.fLine=114;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element.cv(),Kunderline.cv(),t64.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		lvl__style=0;
		{
			Bool t65;
			t65=g->CompareString(ctx,lvt__bold.get(),Ktrue.get())==0;
			if (!(t65.get())) goto _24;
		}
		lvl__style=lvl__style.get()+1;
_24:
		{
			Bool t67;
			t67=g->CompareString(ctx,lvt__italic.get(),Ktrue.get())==0;
			if (!(t67.get())) goto _25;
		}
		lvl__style=lvl__style.get()+2;
_25:
		{
			Bool t69;
			t69=g->CompareString(ctx,lvt__underline.get(),Ktrue.get())==0;
			if (!(t69.get())) goto _26;
		}
		lvl__style=lvl__style.get()+4;
_26:
		{
			Long t71;
			t71=lvl__style.get();
			Long t72;
			t72=lvl__color.get();
			Long t73;
			t73=lvl__typ.get();
			c.f.fLine=127;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,198).cv(),nullptr,t73.cv(),lvl__typ.cv(),(CV*)9,t72.cv(),lvl__color.cv(),(CV*)9,t71.cv(),lvl__style.cv(),(CV*)9},3)) goto _0;
			g->Check(ctx);
		}
_23:
		li=li.get()+1;
_5:
		if (li.get()<=v0.get()) goto _6;
		c.f.fLine=133;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__dom.cv()},1,722)) goto _0;
		g->Check(ctx);
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
