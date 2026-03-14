## About

AI Infrastructure Engineer, Researcher, and Open-Source Contributor. I build AI systems that ship to production — where architecture decisions compound into products developers actually use. Previously built and led engineering on two widely-adopted open-source AI projects.

Currently pursuing Electronics & Computer Science at VIT Mumbai, working toward graduate research in neural systems and brain-inspired computation.

<a href="https://harshalmore.dev/">
<img src="https://img.shields.io/badge/Portfolio-harshalmore.dev-white?style=flat-square&labelColor=white&color=black" alt="Portfolio"/>
</a>&nbsp;
<a href="https://linkedin.com/in/harshalmore31">
<img src="https://img.shields.io/badge/LinkedIn-harshalmore31-white?style=flat-square&logo=linkedin&logoColor=0A66C2&labelColor=white&color=black" alt="LinkedIn"/>
</a>&nbsp;
<a href="https://github.com/harshalmore31">
<img src="https://img.shields.io/badge/GitHub-harshalmore31-white?style=flat-square&logo=github&logoColor=black&labelColor=white&color=black" alt="GitHub"/>
</a>

---

```bash
> cat ~/work/featured.md
```

## Featured Work

### Memori — Creator & Lead Architect

<a href="https://github.com/MemoriLabs/Memori"><code>github.com/MemoriLabs/Memori</code></a>

SQL-native memory layer for LLMs and AI agents.

- Independently architected & built the first two production versions of the platform
- Designed multi-database backend system — SQLite, PostgreSQL, MySQL, MongoDB, Oracle
- Built DigitalOcean one-click droplet for zero-config deployment
- Created Gradient AI playground for developers to test without local setup
- Authored developer documentation, API reference, and cookbook
- Grew organic community — external contributors, teams building on it, inbound enterprise interest
- All shipped before a formal team existed

### Swarms — Co-Author & Core Contributor

<a href="https://github.com/kyegomez/swarms"><code>github.com/kyegomez/swarms</code></a>

Enterprise multi-agent orchestration framework.

- Integrated AI Co-Scientist system into the framework core
- Enhanced agent utilities — vision processing, streaming responses, persistent memory
- Authored architecture guides, cloud deployment docs, and vector DB integration walkthroughs
- Built automated test suites and error handling infrastructure
- Refactored codebase for horizontal scalability and multi-modal execution

---

```bash
> ls -la ~/projects/
```

## Projects

### Naval-Gemma — Fine-tuned LLM for philosophical Q&A

<a href="https://huggingface.co/harshalmore31/naval_gemma-3"><code>HuggingFace</code></a>&nbsp;·&nbsp;<a href="https://ollama.com/harshalmore31/naval-gemma"><code>Ollama</code></a>

- Fine-tuned Google DeepMind's Gemma-3B on a custom-built dataset
- Source material: The Almanack of Naval Ravikant, scraped via custom PDF pipeline
- Quantized to Q8_0 using llama.cpp for efficient local inference
- Deployed fully offline via Ollama — private, fast, no API dependency
- Training pipeline built with Unsloth for memory-efficient fine-tuning

### Echo — AI Journal with Adaptive RAG

<a href="https://github.com/harshalmore31/echo"><code>GitHub</code></a>

- Local-first LLM journaling system with RAG + feedback loops
- Conversations summarized, embedded, and made searchable over time
- Context evolves adaptively — the system learns from interaction history
- Built with LangChain, Qdrant, bge-m3, and Whisper

### Post-Supa-Bridge — Real-time Web Integration

<a href="https://github.com/harshalmore31/post-supa-bridge"><code>GitHub</code></a>

- Real-time inventory sync — sub-500ms avg data load, 10-20ms real-time sync
- Performance benchmarks: LCP 0.75s, CLS 0.01, INP 80ms
- PostgreSQL as source of truth, Supabase for real-time pub/sub, Redis for instant stats
- Built with Flask, JavaScript, WebSockets, Nuxt.js

---

```bash
> echo $TECH_STACK
```

## Tech Stack

[![My Skills](https://skillicons.dev/icons?i=python,typescript,javascript,cpp,java&theme=dark)](https://skillicons.dev)

[![My Skills](https://skillicons.dev/icons?i=fastapi,flask,nodejs,react,nextjs,tailwind&theme=dark)](https://skillicons.dev)

[![My Skills](https://skillicons.dev/icons?i=postgres,mysql,sqlite,mongodb,redis,supabase&theme=dark)](https://skillicons.dev)

[![My Skills](https://skillicons.dev/icons?i=docker,digitalocean,firebase,cloudflare,git,github&theme=dark)](https://skillicons.dev)
