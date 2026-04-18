plugins {
    java
    war
}

java {
    toolchain {
        languageVersion = JavaLanguageVersion.of(21)
    }
}

repositories {
    mavenCentral()
}

sourceSets {
    main {
        java {
            setSrcDirs(listOf("helloservlet/WEB-INF/src"))
        }
    }
}

dependencies {
    compileOnly("jakarta.servlet:jakarta.servlet-api:6.1.0")
}

tasks.war {
    archiveFileName = "helloservlet.war"
    from("helloservlet") {
        include("index.html")
    }
    webInf {
        from("helloservlet/WEB-INF") {
            include("web.xml")
        }
    }
}
